create table pmsmotaf
(
  pmmavisn    varchar2(8) default ' ' not null,
  pmmaadat    varchar2(8) default ' ' not null,
  pmmaatim    varchar2(8) default ' ' not null,
  pmmasusl    varchar2(1) default ' ' not null,
  pmmasusi    varchar2(1) default ' ' not null,
  pmmabasi    varchar2(1) default ' ' not null,
  pmmasist    varchar2(1) default ' ' not null,
  pmmawalk    varchar2(1) default ' ' not null,
  pmmauarm    varchar2(1) default ' ' not null,
  pmmahmov    varchar2(1) default ' ' not null,
  pmmaahan    varchar2(1) default ' ' not null,
  pmmacdat    varchar2(8) default ' ' not null,
  pmmactim    varchar2(8) default ' ' not null,
  pmmacuid    varchar2(10) default ' ' not null,
  pmmaudat    varchar2(8) default ' ' not null,
  pmmautim    varchar2(8) default ' ' not null,
  pmmauuid    varchar2(10) default ' ' not null,
  pmmaspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsmota1 primary key( 
pmmavisn,
pmmaadat,
pmmaatim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
