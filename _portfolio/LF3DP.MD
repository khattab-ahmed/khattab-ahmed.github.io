---
layout: single
title: "Large Format 3D Printed Podium"
excerpt: "Generative Designed Podium"
header:
  image: "/assets/img/FinalPodiumFrontLeft.png"
  teaser: "/assets/img/FinalPodiumSide.png"
gallery:
  - url: /assets/img/Podium1.png
    image_path: assets/img/Podium1.png
  - url: /assets/img/Podium2.png
    image_path: assets/img/Podium2.png
  - url: /assets/img/Podium3.png
    image_path: assets/img/Podium3.png
---

## Large Format Printing & Generative Design Overview

Large-format 3D printing and generative design are two technologies that have the potential to revolutionize the manufacturing and construction industries. LF3DP is an additive manufacturing technique, where a material is liquified and extruded layer-by-layer onto a surface just like a traditional 3D printer but at a larger scale. Large-format or 3D printing in general is preferred over subtracting manufacturing techniques for multiple reasons. This includes the ability to create complex shapes and structures. Traditional manufacturing techniques are limited by their ability to cut from larger chunks of material. Large-format 3D printing also allows for the use of recycled materials, which can reduce waste and energy consumption, making it a more sustainable alternative to traditional manufacturing and construction. This can be done through pre-recycled pellets or by grinding up plastics everyday plastics to create filament.

Generative design is a design exploration process where designers or engineers input design goals into a generative design software, along with parameters such as spatial requirements, materials, manufacturing methods, and cost constraints. The software examines all the possible permutations of a solution by removing and reallocating materials in certain areas until one successfully satisfies all of the constraints. It tests and learns from each iteration what works and what doesn’t. At this point, the designer can select the most suitable design based on specific criteria, such as strength, weight, or price.

The combination of large-format 3D printing and generative design has the potential to drive innovation within current manufacturing practices through unique and optimized models. Using them together can allow for creative structures to be brought to life with the added ability to use recycled material. 


## Possible Uses: Planetary-surface construction

With the daily influx of space exploration, comes an increased significance of the next steps after humans reach a new planet. Once on the moon or another planet, it is inefficient and doesn’t make sense to transport all of the necessary building structures to make it habitable preassembled. 1. It would take up a lot of space, and 2. It would weigh down the rocket ship, requiring more resources like fuel to power it. It also is not scalable, for every human that arrives on the planet, an additional set of structures would be required. The idea of Planetary-surface construction involves the construction of artificial habitats and other structures on planetary surfaces.

Planetary surface construction can be divided into three phases or classes(Wikipedia):
  - Class I: Pre-integrated hard shell modules ready to use immediately upon delivery.
    - For example - Furniture and other building materials that are fully constructed before arriving on the planet
  - Class II: Prefabricated kit-of-parts that is surface assembled after delivery.
    - For example - Parts to build a large-format 3D printer
  - Class III: In-situ resource utilization derived structure with integrated Earth components.
    - For example - Things that are printed from the 3D printer using materials on hand.

As mentioned, Class I is flawed and a waste of resources. The perfect theory of Planetary surface construction involves a combination of Class II and III. Utilizing some components from Earth to build something to employ resources of a new planet. If construction can occur on the planetary surface, very minimal equipment should be required to create essential structures. Some essential structures include; habitat, Infrastructure, Mining, and Resource Extraction Facilities, Research and Scientific Facilities, Agriculture and Food Production Facilities, and Waste Management Facilities. 

Large-format 3D printing is an emerging technology with significant potential for planetary-surface construction. This technology allows for the construction of large-scale structures using locally sourced materials, enabling the construction of habitats and infrastructure on other planets and moons cost-effectively and sustainably. 

One of the major advantages of large-format 3D printing for planetary-surface construction is the ability to use local materials. This technology can process a variety of raw materials, such as sand and gravel, into printable materials that can be used to construct structures (NASA). This reduces the need to transport materials from Earth, which is costly and logistically challenging. Additionally, it can use pellets or recycled material which is much easier to transport. Traditional construction methods often generate a significant amount of waste and require the use of energy-intensive equipment, compared to 3D printing. This is a very scalable technique, as more humans arrive, all that is required is more raw material. Minimal tools or intervention would be required if the 3D printer is built well.

A way to save material and utilize efficient printing techniques is by leveraging generative design in models or structures. Utilizing GD can reduce up to 40% of the raw material required to build a part (Autodesk). That savings in print material can be used in future models and structures, contributing to the overall sustainability of planetary construction, while also efficiently utilizing raw materials. This can be particularly useful for creating habitats and other structures that are optimized for the environmental conditions of different planets and moons or the amount of material on hand.

However, there is a small problem with the idea of widely adopting the use of large-format 3D printing for planetary-surface construction like the need for a reliable power source. A large printer, big enough to print aspects of a structure will consume a significant amount of energy to operate, and this can be challenging to provide on other planets where power is limited. The use of specialized solar panels is an option but comes at an extensive price. 

Based on the advantages and disadvantages mentioned above, large-format 3D printing has considerable potential for planetary-surface construction. Potential applications include creating all of the previously mentioned essential structures like habitats, infrastructure, and other structures for scientific research. Overall, planetary-surface construction is a key aspect of space exploration and colonization and will play an important role in humanity's future expansion beyond Earth.


## The Design

The objective of this assignment in my Additive and Polymer-Based Manufacturing course was to leverage Fusion360’s generative design (GD) workflow in to create a podium for the Digital Fabrication Lab. The podium would be printed using additive manufacturing techniques on a large-format 3D printer (LF3DP) and had to be optimized for such. Optimizing included; reducing material usage/weight as much as possible and removing any extreme overhang angles (< 45°), since the specific printer can’t produce support material to bridge overhanging material. 

The LF3DP being used to print has the following specifications:
- Build volume 4’x4’x4’
- Output ~ 1 kg hour
- Bridge distance < 100 mm
- Minimum feature size: 30 mm

<img src="/assets/img/PodiumReal.JPG" alt="Render of Podium" style="width:500px;">

Subscale model printed on an Original Prusa i3 MK3S at a .11 scale reduction to confirm printability and overhangs were greater than (> 45°).

Final Model Specifications:
- Dimensions: 30 x 30 x 47 in (762 x 762 x 1194 mm)
- Weight in ABS Plastic: 208 lbs (94.4 kg)
- Minimum Safety Factor: 9.87

## CAD Model of Device

<iframe src="https://a360.co/41C5vZ7" width="600" height="500" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

## Design Process

Using fusion360 an initial basic design was created with a combination of rectangles and squares. A picture of this is shown below on the left. The real magic happens after I created load cases and applied different pieces of the design. I started by creating a fixed structural constraint to the base so that fusion would know that the model would be sitting on the base. Within that load case, I also added a force of 1500N that was normal to the top face of the podium, simulating a large person standing on the top of the podium. The second load case entailed a 400N shear force to the top face, simulating someone leaning against the podium. The third load case was a 200N force normal to the self, simulating up to 45 pounds of stuff being stored on the shelf. Together these load cases with the help of fusion created a successful generative design shown in the middle picture below. This was not immediately printable due to the overhang angles, therefore I had to edit the model using the form tools. That entailed dragging, deleting, and repositioning edges and faces of the model's mesh. The main area of the issue was the area between the top and the shelf, there were multiple connecting points where the overhang angle was smaller than 45°. The final model is shown in the right picture below.


## Citations


{% include gallery caption="Steps along the design process" %} 
