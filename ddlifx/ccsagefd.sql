create table ccsageaf
(
  ccagdef     char(1) default ' ' not null,
  ccaggrp     char(3) default ' ' not null,
  ccagdes     char(35) default ' ' not null,
  ccagtage    char(3) default ' ' not null,
  ccagspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsagea1 on ccsageaf
(
ccagdef,
ccaggrp
);
create unique index ccsagea2 on ccsageaf
(
ccagdef,
ccagtage,
ccaggrp
);
revoke all on ccsageaf from public ; 
grant select on ccsageaf to public ; 
