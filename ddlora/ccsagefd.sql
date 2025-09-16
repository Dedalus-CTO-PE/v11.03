create table ccsageaf
(
  ccagdef     varchar2(1) default ' ' not null,
  ccaggrp     varchar2(3) default ' ' not null,
  ccagdes     varchar2(35) default ' ' not null,
  ccagtage    varchar2(3) default ' ' not null,
  ccagspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsagea1 primary key( 
ccagdef,
ccaggrp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsagea2 on ccsageaf
(
ccagdef,
ccagtage,
ccaggrp
)
  tablespace pas_indx; 
