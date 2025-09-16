create table pmssrraf
(
  pmrrumid    varchar2(16) default ' ' not null,
  pmrrucnt    varchar2(2) default ' ' not null,
  pmrrmnum    varchar2(20) default ' ' not null,
  pmrrurno    varchar2(8) default ' ' not null,
  pmrrmtyp    varchar2(2) default ' ' not null,
  pmrrrkey    varchar2(30) default ' ' not null,
  pmrrrdte    varchar2(8) default ' ' not null,
  pmrrrtim    varchar2(8) default ' ' not null,
  pmrrresa    varchar2(160) default ' ' not null,
  pmrrresb    varchar2(160) default ' ' not null,
  pmrrresc    varchar2(160) default ' ' not null,
  pmrrresd    varchar2(160) default ' ' not null,
  pmrrrese    varchar2(160) default ' ' not null,
  pmrrresf    varchar2(160) default ' ' not null,
  pmrrstat    varchar2(2) default ' ' not null,
  pmrrmapd    varchar2(1) default ' ' not null,
  pmrrspar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmssrra1 primary key( 
pmrrumid,
pmrrucnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmssrra2 on pmssrraf
(
pmrrurno,
pmrrumid,
pmrrucnt
)
  tablespace pas_indx; 
create unique index pmssrra3 on pmssrraf
(
pmrrrdte,
pmrrrtim,
pmrrumid,
pmrrucnt
)
  tablespace pas_indx; 
