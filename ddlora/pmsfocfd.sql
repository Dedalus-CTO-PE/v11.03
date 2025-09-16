create table pmsfocaf
(
  pmfovisn    varchar2(8) default ' ' not null,
  pmfoepno    varchar2(2) default ' ' not null,
  pmfopcdt    varchar2(8) default ' ' not null,
  pmfophoc    varchar2(3) default ' ' not null,
  pmforapc    varchar2(2) default ' ' not null,
  pmfocdat    varchar2(8) default ' ' not null,
  pmfoctim    varchar2(8) default ' ' not null,
  pmfocuid    varchar2(10) default ' ' not null,
  pmfoudat    varchar2(8) default ' ' not null,
  pmfoutim    varchar2(8) default ' ' not null,
  pmfouuid    varchar2(10) default ' ' not null,
  pmfospar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsfoca1 primary key( 
pmfovisn,
pmfoepno,
pmfopcdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
