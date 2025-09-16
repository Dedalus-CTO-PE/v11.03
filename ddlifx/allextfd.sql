create table allextaf
(
  alexvisn    char(8) default ' ' not null,
  alexextr    char(8) default ' ' not null,
  alexrdat    char(8) default ' ' not null,
  alexahcp    char(10) default ' ' not null,
  alexcast    char(10) default ' ' not null,
  alexrref    char(3) default ' ' not null,
  alexreft    char(3) default ' ' not null,
  alexorcd    char(6) default ' ' not null,
  alexhcpc    char(10) default ' ' not null,
  alexcom1    char(50) default ' ' not null,
  alexcom2    char(50) default ' ' not null,
  alexcom3    char(50) default ' ' not null,
  alexcom4    char(50) default ' ' not null,
  alexcdat    char(8) default ' ' not null,
  alexctim    char(8) default ' ' not null,
  alexcuid    char(10) default ' ' not null,
  alexudat    char(8) default ' ' not null,
  alexutim    char(8) default ' ' not null,
  alexuuid    char(10) default ' ' not null,
  alexmohr    char(1) default ' ' not null,
  alexrcst    char(1) default ' ' not null,
  alexspar    char(98) default ' ' not null,
  lf          char(1)
);
create unique index allexta1 on allextaf
(
alexvisn,
alexextr
);
create unique index allexta2 on allextaf
(
alexrdat,
alexvisn,
alexextr
);
revoke all on allextaf from public ; 
grant select on allextaf to public ; 
