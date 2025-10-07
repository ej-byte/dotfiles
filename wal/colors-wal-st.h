const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#09080F", /* black   */
  [1] = "#6D385B", /* red     */
  [2] = "#6E3D5D", /* green   */
  [3] = "#9F4C6E", /* yellow  */
  [4] = "#C15672", /* blue    */
  [5] = "#B46885", /* magenta */
  [6] = "#E87287", /* cyan    */
  [7] = "#f1c4c5", /* white   */

  /* 8 bright colors */
  [8]  = "#a88989",  /* black   */
  [9]  = "#6D385B",  /* red     */
  [10] = "#6E3D5D", /* green   */
  [11] = "#9F4C6E", /* yellow  */
  [12] = "#C15672", /* blue    */
  [13] = "#B46885", /* magenta */
  [14] = "#E87287", /* cyan    */
  [15] = "#f1c4c5", /* white   */

  /* special colors */
  [256] = "#09080F", /* background */
  [257] = "#f1c4c5", /* foreground */
  [258] = "#f1c4c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
