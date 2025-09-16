create table hicrchaf
(
  hcrhrnum    varchar2(3) default ' ' not null,
  hcrhcntr    varchar2(5) default ' ' not null,
  hcrhcnum    number(3,0) default 0 not null,
  hcrhpmci    varchar2(8) default ' ' not null,
  hcrhsamt    number(14,2) default 0 not null,
  hcrhfnam    varchar2(30) default ' ' not null,
  hcrhspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicrcha1 primary key( 
hcrhrnum,
hcrhcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
