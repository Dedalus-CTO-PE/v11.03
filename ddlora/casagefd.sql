create table casageaf
(
  ccagdef     varchar2(1) default ' ' not null,
  ccaggrp     varchar2(3) default ' ' not null,
  ccagdes     varchar2(35) default ' ' not null,
  ccagtage    varchar2(3) default ' ' not null,
  ccagtmth    varchar2(2) default ' ' not null,
  ccagtday    varchar2(3) default ' ' not null,
  ccagspa     varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint casagea1 primary key( 
ccagdef,
ccaggrp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index casagea2 on casageaf
(
ccagdef,
ccagtage,
ccagtmth,
ccagtday,
ccaggrp
)
  tablespace pas_indx; 
