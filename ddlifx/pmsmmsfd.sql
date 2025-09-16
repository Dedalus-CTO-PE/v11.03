create table pmsmmsaf
(
  pmmmvisn    char(8) default ' ' not null,
  pmmmadat    char(8) default ' ' not null,
  pmmmatim    char(8) default ' ' not null,
  pmmmort1    char(1) default ' ' not null,
  pmmmort2    char(1) default ' ' not null,
  pmmmreg1    char(1) default ' ' not null,
  pmmmreg2    char(1) default ' ' not null,
  pmmmattn    char(1) default ' ' not null,
  pmmmrecl    char(1) default ' ' not null,
  pmmmlng1    char(1) default ' ' not null,
  pmmmlng2    char(1) default ' ' not null,
  pmmmlng3    char(1) default ' ' not null,
  pmmmlng4    char(1) default ' ' not null,
  pmmmlng5    char(1) default ' ' not null,
  pmmmlng6    char(1) default ' ' not null,
  pmmmlcns    char(1) default ' ' not null,
  pmmmcdat    char(8) default ' ' not null,
  pmmmctim    char(8) default ' ' not null,
  pmmmcuid    char(10) default ' ' not null,
  pmmmudat    char(8) default ' ' not null,
  pmmmutim    char(8) default ' ' not null,
  pmmmuuid    char(10) default ' ' not null,
  pmmmdelf    char(1) default ' ' not null,
  pmmmduid    char(10) default ' ' not null,
  pmmmddte    char(8) default ' ' not null,
  pmmmdtme    char(8) default ' ' not null,
  pmmmdres    char(3) default ' ' not null,
  pmmmspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsmmsa1 on pmsmmsaf
(
pmmmvisn,
pmmmadat,
pmmmatim
);
revoke all on pmsmmsaf from public ; 
grant select on pmsmmsaf to public ; 
