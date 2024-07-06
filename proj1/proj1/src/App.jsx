// import { useState } from "react";
import "./App.css";
import Nav from "./Nav/Nav";

function App() {
  return (
    <>
      <Nav />
      <div className="hero">
        <h1>
          <span className="headerEmph">Hello</span>
          <span className="headerEmphasis">universe</span>
        </h1>
        <h2>I'M ADARSH</h2>
      </div>
      <div className="container">
        <div className="box">
          <div className="box-content">
            <p>I'm a web developer</p>
            <p>I'm a web developer</p>
            <p>Web developer</p>
          </div>
        </div>

        <button className="button">
          <span>Click me</span>
        </button>
      </div>
    </>
  );
}

export default App;
