create table csmuicaf
(
  csucdbs     varchar2(3) default ' ' not null,
  csuccat     varchar2(7) default ' ' not null,
  csucsup     varchar2(5) default ' ' not null,
  csucsut     varchar2(15) default ' ' not null,
  csuctyp     number(2,0) default 0 not null,
  csucspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmuica1 primary key( 
csucdbs,
csuccat,
csucsup,
csucsut)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
