create table clasitaf
(
  castsite    varchar2(6) default ' ' not null,
  castdesc    varchar2(30) default ' ' not null,
  castpass    varchar2(8) default ' ' not null,
  castfile    varchar2(2) default ' ' not null,
  casttype    varchar2(1) default ' ' not null,
  castscrn    number(1,0) default 0 not null,
  castspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint clasita1 primary key( 
castsite)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index clasita2 on clasitaf
(
castdesc,
castsite
)
  tablespace pas_indx; 
