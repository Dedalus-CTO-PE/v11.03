create table pmsarqaf
(
  pmarreqn    char(10) default ' ' not null,
  pmarurno    char(8) default ' ' not null,
  pmarvisn    char(8) default ' ' not null,
  pmarreqd    char(8) default ' ' not null,
  pmarreqt    char(8) default ' ' not null,
  pmarrtyp    char(1) default ' ' not null,
  pmarresc    char(10) default ' ' not null,
  pmarunit    char(3) default ' ' not null,
  pmarteam    char(5) default ' ' not null,
  pmarprty    char(3) default ' ' not null,
  pmardiag    char(40) default ' ' not null,
  pmarproc    char(9) default ' ' not null,
  pmarprod    char(80) default ' ' not null,
  pmarpro1    char(9) default ' ' not null,
  pmarpro2    char(9) default ' ' not null,
  pmarside    char(3) default ' ' not null,
  pmarcono    char(1) default ' ' not null,
  pmarconf    char(3) default ' ' not null,
  pmarppby    char(3) default ' ' not null,
  pmarihos    char(3) default ' ' not null,
  pmarpsah    char(1) default ' ' not null,
  pmarphos    char(3) default ' ' not null,
  pmarppad    char(8) default ' ' not null,
  pmarbtyp    char(3) default ' ' not null,
  pmaranpr    char(1) default ' ' not null,
  pmarccbr    char(3) default ' ' not null,
  pmarudf1    char(3) default ' ' not null,
  pmaranty    char(3) default ' ' not null,
  pmarodur    char(5) default ' ' not null,
  pmarparc    char(3) default ' ' not null,
  pmarcltr    char(3) default ' ' not null,
  pmarhght    char(6) default ' ' not null,
  pmarwght    char(6) default ' ' not null,
  pmarcbmi    char(5) default ' ' not null,
  pmarcoag    char(3) default ' ' not null,
  pmarracg    char(1) default ' ' not null,
  pmaraplt    char(1) default ' ' not null,
  pmaritcr    char(3) default ' ' not null,
  pmarintr    char(3) default ' ' not null,
  pmarclam    char(3) default ' ' not null,
  pmarsrcr    char(3) default ' ' not null,
  pmarrefc    char(10) default ' ' not null,
  pmarprac    char(10) default ' ' not null,
  pmarpcnt    char(2) default ' ' not null,
  pmarlsts    char(3) default ' ' not null,
  pmarints    char(3) default ' ' not null,
  pmarshtn    char(3) default ' ' not null,
  pmarplos    char(4) default ' ' not null,
  pmarnwhc    char(3) default ' ' not null,
  pmarprdt    char(8) default ' ' not null,
  pmarthlc    char(3) default ' ' not null,
  pmarimpr    char(1) default ' ' not null,
  pmarimpd    char(80) default ' ' not null,
  pmarimpo    char(1) default ' ' not null,
  pmarbngr    char(1) default ' ' not null,
  pmarexfx    char(1) default ' ' not null,
  pmarstat    char(1) default ' ' not null,
  pmarmapr    char(1) default ' ' not null,
  pmarthrq    char(1) default ' ' not null,
  pmarrecc    char(1) default ' ' not null,
  pmarrrcl    char(3) default ' ' not null,
  pmarrrem    char(3) default ' ' not null,
  pmartsrc    char(5) default ' ' not null,
  pmarcdat    char(8) default ' ' not null,
  pmarctim    char(8) default ' ' not null,
  pmarcuid    char(10) default ' ' not null,
  pmarudat    char(8) default ' ' not null,
  pmarutim    char(8) default ' ' not null,
  pmaruuid    char(10) default ' ' not null,
  pmaraprr    char(3) default ' ' not null,
  pmarspar    char(97) default ' ' not null,
  lf          char(1)
);
create unique index pmsarqa1 on pmsarqaf
(
pmarreqn
);
create unique index pmsarqa2 on pmsarqaf
(
pmarurno,
pmarreqn
);
create unique index pmsarqa3 on pmsarqaf
(
pmarihos,
pmarreqd,
pmarreqt,
pmarreqn
);
create unique index pmsarqa4 on pmsarqaf
(
pmarihos,
pmarstat,
pmarreqd,
pmarreqt,
pmarreqn
);
create unique index pmsarqa5 on pmsarqaf
(
pmarihos,
pmarunit,
pmarreqd,
pmarreqt,
pmarstat,
pmarreqn
);
revoke all on pmsarqaf from public ; 
grant select on pmsarqaf to public ; 
