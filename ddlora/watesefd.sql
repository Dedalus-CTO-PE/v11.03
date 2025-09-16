create table wateseaf
(
  wteeuniq    varchar2(9) default ' ' not null,
  wteeedat    varchar2(8) default ' ' not null,
  wteeurno    varchar2(8) default ' ' not null,
  wteeadat    varchar2(8) default ' ' not null,
  wteedest    varchar2(4) default ' ' not null,
  wteeinsd    varchar2(3) default ' ' not null,
  wteeplos    varchar2(3) default ' ' not null,
  wteeproc    varchar2(9) default ' ' not null,
  wteepdes    varchar2(50) default ' ' not null,
  wteerrem    varchar2(3) default ' ' not null,
  wteerdat    varchar2(8) default ' ' not null,
  wteeremd    varchar2(8) default ' ' not null,
  wteesref    varchar2(3) default ' ' not null,
  wteesspc    varchar2(3) default ' ' not null,
  wteeprev    varchar2(9) default ' ' not null,
  wteerefr    varchar2(4) default ' ' not null,
  wteewebc    varchar2(10) default ' ' not null,
  wteecdat    varchar2(8) default ' ' not null,
  wteectim    varchar2(8) default ' ' not null,
  wteewebu    varchar2(10) default ' ' not null,
  wteeudat    varchar2(8) default ' ' not null,
  wteeutim    varchar2(8) default ' ' not null,
  wteeardt    varchar2(8) default ' ' not null,
  wteemanu    varchar2(1) default ' ' not null,
  wteeptwt    varchar2(4) default ' ' not null,
  wteesgid    varchar2(10) default ' ' not null,
  wteeradt    varchar2(8) default ' ' not null,
  wteetcmp    varchar2(6) default ' ' not null,
  wteespar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watesea1 primary key( 
wteeuniq,
wteeedat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index watesea2 on wateseaf
(
wteeedat,
wteeuniq
)
  tablespace pas_indx; 
