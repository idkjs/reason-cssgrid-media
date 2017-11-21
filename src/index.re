type routes =
  | AlbumRoute
  | ArtistRoute;

let router = DirectorRe.makeRouter({"/": "album", "/artist": "artist"});

let renderForRoute = (route) => {
  let element =
    switch route {
    | AlbumRoute => <Album router />
    | ArtistRoute => <Artist router />
    };
  ReactDOMRe.renderToElementWithId(element, "index")
};

let handlers = {
  "album": () => renderForRoute(AlbumRoute),
  "artist": () => renderForRoute(ArtistRoute)
};

DirectorRe.configure(router, {"html5history": true, "resource": handlers});

DirectorRe.init(router, "/");