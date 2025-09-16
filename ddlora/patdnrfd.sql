create table patdnraf
(
  ptdnurno    varchar2(8) default ' ' not null,
  dptdncnt    varchar2(2) default ' ' not null,
  ptdncode    varchar2(3) default ' ' not null,
  ptdnlupd    varchar2(8) default ' ' not null,
  ptdnspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdnra1 primary key( 
ptdnurno,
dptdncnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
