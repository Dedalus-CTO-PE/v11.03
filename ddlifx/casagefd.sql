create table casageaf
(
  ccagdef     char(1) default ' ' not null,
  ccaggrp     char(3) default ' ' not null,
  ccagdes     char(35) default ' ' not null,
  ccagtage    char(3) default ' ' not null,
  ccagtmth    char(2) default ' ' not null,
  ccagtday    char(3) default ' ' not null,
  ccagspa     char(15) default ' ' not null,
  lf          char(1)
);
create unique index casagea1 on casageaf
(
ccagdef,
ccaggrp
);
create unique index casagea2 on casageaf
(
ccagdef,
ccagtage,
ccagtmth,
ccagtday,
ccaggrp
);
revoke all on casageaf from public ; 
grant select on casageaf to public ; 
