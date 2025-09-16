create table csmuiaaf
(
  csuadbs     varchar2(3) default ' ' not null,
  csuacat     varchar2(7) default ' ' not null,
  csuatyp     number(2,0) default 0 not null,
  csuaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmuiaa1 primary key( 
csuadbs,
csuacat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
