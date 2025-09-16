create table wateseaf
(
  wteeuniq    char(9) default ' ' not null,
  wteeedat    char(8) default ' ' not null,
  wteeurno    char(8) default ' ' not null,
  wteeadat    char(8) default ' ' not null,
  wteedest    char(4) default ' ' not null,
  wteeinsd    char(3) default ' ' not null,
  wteeplos    char(3) default ' ' not null,
  wteeproc    char(9) default ' ' not null,
  wteepdes    char(50) default ' ' not null,
  wteerrem    char(3) default ' ' not null,
  wteerdat    char(8) default ' ' not null,
  wteeremd    char(8) default ' ' not null,
  wteesref    char(3) default ' ' not null,
  wteesspc    char(3) default ' ' not null,
  wteeprev    char(9) default ' ' not null,
  wteerefr    char(4) default ' ' not null,
  wteewebc    char(10) default ' ' not null,
  wteecdat    char(8) default ' ' not null,
  wteectim    char(8) default ' ' not null,
  wteewebu    char(10) default ' ' not null,
  wteeudat    char(8) default ' ' not null,
  wteeutim    char(8) default ' ' not null,
  wteeardt    char(8) default ' ' not null,
  wteemanu    char(1) default ' ' not null,
  wteeptwt    char(4) default ' ' not null,
  wteesgid    char(10) default ' ' not null,
  wteeradt    char(8) default ' ' not null,
  wteetcmp    char(6) default ' ' not null,
  wteespar    char(13) default ' ' not null,
  lf          char(1)
);
create unique index watesea1 on wateseaf
(
wteeuniq,
wteeedat
);
create unique index watesea2 on wateseaf
(
wteeedat,
wteeuniq
);
revoke all on wateseaf from public ; 
grant select on wateseaf to public ; 
