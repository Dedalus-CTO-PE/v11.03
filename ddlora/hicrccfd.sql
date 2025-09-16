create table hicrccaf
(
  hcrcbtch    varchar2(5) default ' ' not null,
  hcrcrnum    varchar2(3) default ' ' not null,
  hcrccntr    varchar2(5) default ' ' not null,
  hcrcdate    varchar2(8) default ' ' not null,
  hcrcpyee    varchar2(10) default ' ' not null,
  hcrcsprv    varchar2(10) default ' ' not null,
  hcrcbena    number(14,2) default 0 not null,
  hcrcbenp    number(14,2) default 0 not null,
  hcrcexcn    number(4,0) default 0 not null,
  hcrcspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicrcca1 primary key( 
hcrcbtch,
hcrcrnum,
hcrccntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicrcca2 on hicrccaf
(
hcrcrnum,
hcrccntr,
hcrcbtch
)
  tablespace pas_indx; 
