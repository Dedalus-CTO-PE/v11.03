create table ccsimcaf
(
  ccimtyp     varchar2(1) default ' ' not null,
  ccimcod     varchar2(9) default ' ' not null,
  ccimity     number(1,0) default 0 not null,
  ccimspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsimca1 primary key( 
ccimtyp,
ccimcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
