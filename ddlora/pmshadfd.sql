create table pmshadaf
(
  pmhdcntr    varchar2(6) default ' ' not null,
  pmhdhacg    varchar2(3) default ' ' not null,
  pmhdvalf    varchar2(3) default ' ' not null,
  pmhdvalt    varchar2(3) default ' ' not null,
  pmhdadjv    number(14,4) default 0 not null,
  pmhdcdat    varchar2(8) default ' ' not null,
  pmhdctim    varchar2(8) default ' ' not null,
  pmhdcuid    varchar2(10) default ' ' not null,
  pmhdudat    varchar2(8) default ' ' not null,
  pmhdutim    varchar2(8) default ' ' not null,
  pmhduuid    varchar2(10) default ' ' not null,
  pmhdspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmshada1 primary key( 
pmhdcntr,
pmhdhacg,
pmhdvalf)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmshada2 on pmshadaf
(
pmhdhacg,
pmhdcntr,
pmhdvalf
)
  tablespace pas_indx; 
