#include <vector>
#include <iostream>
#include <iterator>

void counting_sort(std::vector<unsigned int>& array) {
  unsigned int min, max;
  max = min = array[0];
  for (size_t i = 1; i < array.size(); i++) {
    if (array[i] < min) {
      min = array[i];
    }
    if (array[i] > max) {
      max = array[i];
    }
  }

  std::vector<unsigned int> counts(max - min + 1, 0);

  for (size_t i = 0; i < array.size(); i++) {
    counts[array[i] - min]++;
  }

  size_t index = 0;
  // пробегаем по всем счетчикам
  // count[i] - показывает сколько раз встречается то или иное число
  for (size_t i = 0; i < counts.size(); i++) {
    for (size_t j = 0; j < counts[i]; j++) {
      array[index++] = i + min;
    }
  }
}

int main() {
  std::vector<unsigned int> array = {1,3,5,2,3,4,3,4,7,6,4};
  counting_sort(array);
  std::copy(array.begin(), array.end(),
            std::ostream_iterator<unsigned int>(std::cout, " "));
};