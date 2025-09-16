create table pmshacaf
(
  pmhacntr    varchar2(6) default ' ' not null,
  pmhahacg    varchar2(3) default ' ' not null,
  pmhahacf    varchar2(3) default ' ' not null,
  pmhahacv    number(14,4) default 0 not null,
  pmhacdat    varchar2(8) default ' ' not null,
  pmhactim    varchar2(8) default ' ' not null,
  pmhacuid    varchar2(10) default ' ' not null,
  pmhaudat    varchar2(8) default ' ' not null,
  pmhautim    varchar2(8) default ' ' not null,
  pmhauuid    varchar2(10) default ' ' not null,
  pmhaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmshaca1 primary key( 
pmhacntr,
pmhahacg,
pmhahacf)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmshaca2 on pmshacaf
(
pmhahacg,
pmhahacf,
pmhacntr
)
  tablespace pas_indx; 
