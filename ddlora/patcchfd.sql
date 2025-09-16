create table patcchaf
(
  ptccurno    varchar2(8) default ' ' not null,
  ptccctyp    varchar2(3) default ' ' not null,
  ptcccnum    varchar2(20) default ' ' not null,
  ptccexdt    varchar2(8) default ' ' not null,
  ptccdvac    varchar2(3) default ' ' not null,
  ptccupdt    varchar2(1) default ' ' not null,
  ptccupdr    varchar2(3) default ' ' not null,
  ptccpexd    varchar2(8) default ' ' not null,
  ptccpcdc    varchar2(3) default ' ' not null,
  ptccurid    varchar2(10) default ' ' not null,
  ptccdate    varchar2(8) default ' ' not null,
  ptcctime    varchar2(8) default ' ' not null,
  ptccspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patccha1 primary key( 
ptccurno,
ptccexdt,
ptccctyp,
ptccdate,
ptcctime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patccha2 on patcchaf
(
ptccctyp,
ptccexdt,
ptccurno,
ptccdate,
ptcctime
)
  tablespace pas_indx; 
