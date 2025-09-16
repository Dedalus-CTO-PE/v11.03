create table patonlvf
(
  oward       varchar2(3) default ' ' not null,
  obed        varchar2(3) default ' ' not null,
  doadmno     varchar2(8) default ' ' not null,
  oerdate     varchar2(8) default ' ' not null,
  oroom       varchar2(3) default ' ' not null,
  oertime     varchar2(8) default ' ' not null,
  ospare      varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patonlv1 primary key( 
oward,
obed,
doadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patonlv2 on patonlvf
(
doadmno,
oward,
obed
)
  tablespace pas_indx; 
