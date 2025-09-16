create table legacmaf
(
  lgacurno    varchar2(8) default ' ' not null,
  lgacadat    varchar2(8) default ' ' not null,
  lgacatim    varchar2(8) default ' ' not null,
  lgacevno    varchar2(8) default ' ' not null,
  lgacline    varchar2(3) default ' ' not null,
  lgaccomm    varchar2(70) default ' ' not null,
  lgacspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legacma1 primary key( 
lgacurno,
lgacadat,
lgacatim,
lgacevno,
lgacline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
