#include <iostream>
#include <string>

#include <httplib.h>
#include <nlohmann/json.hpp>


class StarWarsWikiApp{
    std::string peopleReq = "/api/people/";
    std::string planetReq = "/api/planets/1";
    std::string filmReq = "/api/films/1";
    httplib::Client* cl = new httplib::Client("http://swapi.dev");

    nlohmann::json makeRequest(std::string request);

public:
    nlohmann::json getInfoAboutFilm(std::string num);

    nlohmann::json getInfoAboutPlanet(std::string num);
};