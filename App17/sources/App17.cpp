#include <App17.h>

using json = nlohmann::json;

json StarWarsWikiApp::makeRequest(std::string request) {
    if (auto responce = this->cl->Get(request)) {
        if (responce->status == 200) {
            return json::parse(responce->body);
    }
    std::cout << "Error" << responce->status << std::endl;
    return *new json;
    }
    std::cout << "Error" << std::endl;
    return *new json;
}

json StarWarsWikiApp::getInfoAboutFilm(std::string num) {
    return this->makeRequest(this->filmReq);
}

json StarWarsWikiApp::getInfoAboutPlanet(std::string num) {
    return this->makeRequest(this->planetReq);
}