create table pmsrelaf
(
  pmrlrels    varchar2(10) default ' ' not null,
  pmrldesc    varchar2(30) default ' ' not null,
  pmrlactv    varchar2(1) default ' ' not null,
  pmrlhdpe    varchar2(10) default ' ' not null,
  pmrlspar    varchar2(39) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsrela1 primary key( 
pmrlrels)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsrela2 on pmsrelaf
(
pmrldesc,
pmrlrels
)
  tablespace pas_indx; 
