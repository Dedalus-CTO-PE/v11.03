create table sinperaf
(
  sipeyear    varchar2(4) default ' ' not null,
  sipeper     varchar2(2) default ' ' not null,
  sipesdt     varchar2(8) default ' ' not null,
  sipeedt     varchar2(8) default ' ' not null,
  sipeloc     number(1,0) default 0 not null,
  sipespa     varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinpera1 primary key( 
sipeyear,
sipeper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinpera2 on sinperaf
(
sipeedt,
sipeyear,
sipeper
)
  tablespace pas_indx; 
