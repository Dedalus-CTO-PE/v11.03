create table ceasaaaf
(
  cesaspc     varchar2(3) default ' ' not null,
  cesayear    varchar2(4) default ' ' not null,
  cesaper     varchar2(2) default ' ' not null,
  cesacst1    number(14,2) default 0 not null,
  cesacst2    number(14,2) default 0 not null,
  cesacst3    number(14,2) default 0 not null,
  cesacst4    number(14,2) default 0 not null,
  cesacst5    number(14,2) default 0 not null,
  cesagla     number(14,2) default 0 not null,
  cesaglb     number(14,2) default 0 not null,
  cesaspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceasaaa1 primary key( 
cesaspc,
cesayear,
cesaper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
