type routes =
  | AlbumRoute
  | PlayerRoute
  | ArtistRoute;

let router = DirectorRe.makeRouter({"/": "album", "/artist": "artist", "/player": "player"});

let renderForRoute = (route) => {
  let element =
    switch route {
    | AlbumRoute => <Album router />
    | ArtistRoute => <Artist router />
    | PlayerRoute => <Player router />
    };
  ReactDOMRe.renderToElementWithId(element, "index")
};

let handlers = {
  "album": () => renderForRoute(AlbumRoute),
  "artist": () => renderForRoute(ArtistRoute),
  "player": () => renderForRoute(PlayerRoute)
};

DirectorRe.configure(router, {"html5history": true, "resource": handlers});

DirectorRe.init(router, "/");