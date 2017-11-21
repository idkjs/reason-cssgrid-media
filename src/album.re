let component = ReasonReact.statelessComponent("Album");

let ste = ReasonReact.stringToElement;

[@bs.module] external beach : string = "../images/a_beach200.jpg";

[@bs.module] external girl : string = "../images/a_girl200.jpg";

[@bs.module] external paint : string = "../images/a_paint200.jpg";

[@bs.module] external pink : string = "../images/a_pink200.jpg";

[@bs.module] external sad : string = "../images/a_sad200.jpg";

[@bs.module] external rain : string = "../images/a_rain200.jpg";

[@bs.module] external search : string = "../images/a_search200.jpg";

[@bs.module] external wheel : string = "../images/a_wheel200.jpg";

let beachsrc = {j|$beach ++ " 1x, " ++ $beach ++ " 2x"|j};

let girlsrc = {j|$girl ++ " 1x, " ++ $girl ++ " 2x"|j};

let paintsrc = {j|$paint ++ " 1x, " ++ $paint ++ " 2x"|j};

let pinksrc = {j|$pink ++ " 1x, " ++ $pink ++ " 2x"|j};

let sadsrc = {j|$sad ++ " 1x, " ++ $sad ++ " 2x"|j};

let rainsrc = {j|$rain ++ " 1x, " ++ $rain ++ " 2x"|j};

let searchsrc = {j|$search ++ " 1x, " ++ $search ++ " 2x"|j};

let wheelsrc = {j|$wheel ++ " 1x, " ++ $wheel ++ " 2x"|j};

let make = (~router, _children) => {
  ...component,
  render: (_self) =>
    <div>
      <Nav router />
      <main className="album">
        <figure>
          <a href="player.html"> <img src=beach srcSet=beachsrc /> </a>
          <figcaption> (ste("On the Beach")) </figcaption>
        </figure>
        <figure>
          <a href="player.html"> <img src=girl srcSet=girlsrc /> </a>
          <figcaption> (ste("Young Hearts")) </figcaption>
        </figure>
        <figure>
          <a href="player.html"> <img src=paint srcSet=paintsrc /> </a>
          <figcaption> (ste("In the Corner")) </figcaption>
        </figure>
        <figure>
          <a href="player.html"> <img src=pink srcSet=pinksrc /> </a>
          <figcaption> (ste("Pretty in Pink")) </figcaption>
        </figure>
        <figure>
          <a href="player.html"> <img src=sad srcSet=sadsrc /> </a>
          <figcaption> (ste("Reflections")) </figcaption>
        </figure>
        <figure>
          <a href="player.html"> <img src=rain srcSet=rainsrc /> </a>
          <figcaption> (ste("Looking Up")) </figcaption>
        </figure>
        <figure>
          <a href="player.html"> <img src=search srcSet=searchsrc /> </a>
          <figcaption> (ste("Looking for You")) </figcaption>
        </figure>
        <figure>
          <a href="player.html"> <img src=wheel srcSet=wheelsrc /> </a>
          <figcaption> (ste("Riding Away")) </figcaption>
        </figure>
      </main>
    </div>
};