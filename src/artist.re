let ste = ReasonReact.stringToElement;

[@bs.module] external andrea : string = "../images/r_andrea160.jpg";

[@bs.module] external clara : string = "../images/r_clara160.jpg";

[@bs.module] external jen : string = "../images/r_jen160.jpg";

[@bs.module] external jordan : string = "../images/r_jordan160.jpg";

[@bs.module] external rey : string = "../images/r_rey160.jpg";

[@bs.module] external sally : string = "../images/r_sally160.jpg";

let component = ReasonReact.statelessComponent("Artist");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <main className="artist">
      <section>
        <div> <a href="player.html"> <img src=andrea /> </a> </div>
        <div> (ste("Andrea Reys")) </div>
      </section>
      <section>
        <div> <a href="player.html"> <img src=clara /> </a> </div>
        <div> (ste("Brenda Bache")) </div>
      </section>
      <section>
        <div> <a href="player.html"> <img src=jen /> </a> </div>
        <div> (ste("Clara Stoneman")) </div>
      </section>
      <section>
        <div> <a href="player.html"> <img src=jordan /> </a> </div>
        <div> (ste("Dory Jensen")) </div>
      </section>
      <section>
        <div> <a href="player.html"> <img src=rey /> </a> </div>
        <div> (ste("Erica Marlay")) </div>
      </section>
      <section>
        <div> <a href="player.html"> <img src=sally /> </a> </div>
        <div> (ste("Fanny Dylan")) </div>
      </section>
    </main>
};