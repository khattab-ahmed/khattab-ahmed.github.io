---
title: "Multimaterial Print-in-Place Pliers"
excerpt: "3-D printed fuctional Pliers"
header:
  teaser: /assets/img/Pliers.png
gallery:
  - url: /assets/img/Pliers1.jpeg
    image_path: assets/img/Pliers1.jpeg
    alt: "placeholder image 1"
  - url: /assets/img/Pliers2.jpeg
    image_path: assets/img/Pliers2.jpeg
    alt: "placeholder image 2"
  - url: /assets/img/Pliers3.jpeg
    image_path: assets/img/Pliers3.jpeg
    alt: "placeholder image 3"
  
---

The purpose of this project was to create functional print-in-place pliers using two different types of filament material. Print-in-place parts are an assembly that is printed without the need for any further manual assembly, and one can start using the part right after it is printed. The pliers themselves are meant to be able to pick up a 3 mm diameter colorant plastic pellet, move it to another location and then release it. A dual extrusion 3D printer was necessary in order to create this device and the two materials that were used were Polylactic acid (PLA) and Thermoplastic polyurethane (TPU). PLA since it is rigid and easy to manufacture and TPU for functional flexibility of gripping.


# CAD Model

<iframe src="https://a360.co/3IVqUpF" width="600" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# 

# Design Specifications

* A MakerGear M3-ID printer with 0.35 mm dual extrusion nozzles was used to dual extrude both filaments.
* PLA filament was used for the rigid plastic components TPU 95A was for the spring component.
* The spring mechanism was a 4x4 square lattice with an interlocking joint attached.
* A repeated mechanical joint is used on all of the interfacing pieces because TPU and PLA do not stick to each other. These joints were sandwiched between exterior laters of PLA therefore hidden when visualizing the pilers
* Based on the design, squeezing the arms of the pliers together stretches the square lattice out and compresses the pliers' jaw. The opposite happens when the arms are stretched out. Below are some specific mesurments of the Jaw
  * Minimum Jaw Width: 2.34 mm (.092”)
  * Resting Jaw Width: 16.4 mm (.646”)
  * Maximum Jaw Width: 31.17 mm (1.23”)


# Print Settings

Within the CAD model, the different parts (Plier’s arms and spring) are different bodies to allow for easy selection of assigning materials to each section of the pliers. The file was Sliced using SuperSlicer to prepare the model for printing. After assigning the arms and spring components to their respective material nozzles on the printer, some settings were manipulated for accurate printing.

* TPU is much more elastic and sensitive than PLA so the maximum speed volumetric speed was 15 mm3/s for both, but TPU has a maximum extrusion speed of 25 mm/s to prevent jamming within the extruder. 
The design sat flush with the printer bed, therefore no support material was necessary.
* A 15% gyroid infill was used, but that can be changed depending on the 
* A wipe tower was used to purge or extrude molten filament before switching which nozzle is operating. The nozzles switch to allow different materials consecutively, this was very important throughout the interlocking joints and the spring mechanism as a whole. The wipe tower was extremely beneficial in priming the nozzle and ensuring there was no contamination between filament extrusion. Through iterations, a 30 mm wide wipe tower with a 2 mm brim worked well.  

The whole part takes around 4 hours to print on a MakerGear M3-ID printer and the final product after a few iterations were functional multi-material print in place, pliers. 


{% include gallery caption="Iteration of pliers in order from left to right" %}
