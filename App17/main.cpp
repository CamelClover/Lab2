#include <App17.h>
#define CPPHTTPLIB_OPENSSL_SUPPORT

int main(){
    StarWarsWikiApp* app = new StarWarsWikiApp();
    std::cout << app->getInfoAboutFilm("1") << std::endl << std::endl;
    std::cout << app->getInfoAboutPlanet("2") << std::endl;
    httplib::Client client("http://swapi.dev");
    auto response = client.Get("/api/people/4/?format*json");
    std::cout << response->status;
    std::cout << response->body;
    std::cout << nlohmann::json::parse(response->body);
    return 0;
}

