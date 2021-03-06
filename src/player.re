let ste = ReasonReact.stringToElement;

[@bs.module] external howl650 : string = "./assets/images/howl650.jpg";

[@bs.module] external howl750 : string = "./assets/images/howl750.jpg";

[@bs.module] external howl850 : string = "./assets/images/howl850.jpg";

[@bs.module] external howl950 : string = "./assets/images/howl950.jpg";

/* [@bs.module] external wav : string = "./assets/media/PolymorphicPodcast-clip.wav";

   [@bs.module] external mp3 : string = "./assets/media/PolymorphicPodcast-clip.mp3";

   [@bs.module] external ogg : string = "./assets/media/PolymorphicPodcast-clip.ogg"; */
let howlsrc = {j|$howl650 ++ " 650w, " ++ $howl750 ++ " 750w, " ++ $howl850 ++ " 850w, " ++ $howl950 ++ " 950w"|j};

Js.log(howlsrc);

let howlsizes = {j|"min-width: 29em 50vw, 100vw"|j};

Js.log(howlsizes);

let component = ReasonReact.statelessComponent("Player");

let make = (~router, _children) => {
  ...component,
  render: (_self) =>
    <div>
      <Nav router />
      <header> (ste("Player")) </header>
      <main className="player">

          <div className="photo">
            <img src=howl650 sizes="(min-width: 29em) 50vw, 100vw" srcSet=howlsrc />
          </div>
          <div className="startTime"> (ste("1:25")) </div>
          <div className="time">
            <input _type="range" name="volume" min=0 max="100" value="30" />
          </div>
          <div className="endTime"> (ste("-2:14")) </div>
          <div className="title">
            <span> (ste("Howling at the Moon")) </span>
            <span> (ste("Wolf Pack Seven")) </span>
          </div>
          <div className="previous"> <span className="fa fa-angle-double-left" /> </div>
          <div className="play"> <span className="fa fa-play" /> </div>
          <div className="next"> <span className="fa fa-angle-double-right" /> </div>
          <div className="voldn"> <span className="fa fa-volume-down" /> </div>
          <div className="volume">
            <span> <input _type="range" name="volume" min=0 max="100" /> </span>
          </div>
          <div className="volup"> <span className="fa fa-volume-up" /> </div>
        </main>
        /* <audio className="audio">
             <source src=mp3 />
             <source src=ogg />
             <source src=wav />
             <p> (ste("This browser does not support native audio")) </p>
           </audio> */
    </div>
};