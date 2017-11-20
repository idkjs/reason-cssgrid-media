let component = ReasonReact.statelessComponent("Main");

[@bs.module] external a_beach200 : string = "../images/a_beach200.jpg";

[@bs.module] external beach200ss : string =
  "../images/a_beach200.jpg 1x, ../images/a_beach400.jpg 2x";

let ste = ReasonReact.stringToElement;

let make = (_children) => {
  ...component,
  render: (_self) =>
    <main className="album">
      <figure>
        <a href="player.html">
           <img src=a_beach200 /> </a>
          /* <img src=a_beach200 srcset=beach200ss /> */
        <figcaption> (ste("On the Beach")) </figcaption>
      </figure>
      <Nav />
    </main>
  /* <figure>
         <a href="player.html">
             <img src="images/a_girl200.jpg" srcset="images/a_girl200.jpg 1x, images/a_girl400.jpg 2x">
         </a>
         <figcaption>Young Hearts</figcaption>
     </figure>

     <figure>
         <a href="player.html">
             <img src="images/a_paint200.jpg" srcset="images/a_paint200.jpg 1x, images/a_paint400.jpg 2x">
         </a>
         <figcaption>In the Corner</figcaption>
     </figure>


     <figure>
         <a href="player.html">
             <img src="images/a_pink200.jpg" srcset="images/a_pink200.jpg 1x, images/a_pink400.jpg 2x">
         </a>
         <figcaption>Pretty in Pink</figcaption>
     </figure>


     <figure>
         <a href="player.html">
             <img src="images/a_sad200.jpg" srcset="images/a_sad200.jpg 1x, images/a_sad400.jpg 2x">
         </a>
         <figcaption>Reflections</figcaption>
     </figure>

     <figure>
         <a href="player.html">
             <img src="images/a_rain200.jpg" srcset="images/a_rain200.jpg 1x, images/a_rain400.jpg 2x">
         </a>
         <figcaption>Looking Up</figcaption>
     </figure>

     <figure>
         <a href="player.html">
             <img src="images/a_search200.jpg" srcset="images/a_search200.jpg 1x, images/a_search400.jpg 2x">
         </a>
         <figcaption>Looking for You</figcaption>
     </figure>

     <figure>
         <a href="player.html">
             <img src="images/a_wheel200.jpg" srcset="images/a_wheel200.jpg 1x, images/a_wheel400.jpg 2x">
         </a>
         <figcaption>Riding Away</figcaption>
     </figure> */
};