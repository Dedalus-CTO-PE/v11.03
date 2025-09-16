create table pmsigraf
(
  pmigcode    varchar2(3) default ' ' not null,
  pmigdesc    varchar2(80) default ' ' not null,
  pmigeati    number(8,3) default 0 not null,
  pmigroom    number(8,3) default 0 not null,
  pmigbath    number(8,3) default 0 not null,
  pmigupbd    number(8,3) default 0 not null,
  pmiglwbd    number(8,3) default 0 not null,
  pmigtoil    number(8,3) default 0 not null,
  pmigblad    number(8,3) default 0 not null,
  pmigbowe    number(8,3) default 0 not null,
  pmigtbed    number(8,3) default 0 not null,
  pmigttoi    number(8,3) default 0 not null,
  pmigttub    number(8,3) default 0 not null,
  pmigwalk    number(8,3) default 0 not null,
  pmigstai    number(8,3) default 0 not null,
  pmigspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsigra1 primary key( 
pmigcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
