create table pmsarqaf
(
  pmarreqn    varchar2(10) default ' ' not null,
  pmarurno    varchar2(8) default ' ' not null,
  pmarvisn    varchar2(8) default ' ' not null,
  pmarreqd    varchar2(8) default ' ' not null,
  pmarreqt    varchar2(8) default ' ' not null,
  pmarrtyp    varchar2(1) default ' ' not null,
  pmarresc    varchar2(10) default ' ' not null,
  pmarunit    varchar2(3) default ' ' not null,
  pmarteam    varchar2(5) default ' ' not null,
  pmarprty    varchar2(3) default ' ' not null,
  pmardiag    varchar2(40) default ' ' not null,
  pmarproc    varchar2(9) default ' ' not null,
  pmarprod    varchar2(80) default ' ' not null,
  pmarpro1    varchar2(9) default ' ' not null,
  pmarpro2    varchar2(9) default ' ' not null,
  pmarside    varchar2(3) default ' ' not null,
  pmarcono    varchar2(1) default ' ' not null,
  pmarconf    varchar2(3) default ' ' not null,
  pmarppby    varchar2(3) default ' ' not null,
  pmarihos    varchar2(3) default ' ' not null,
  pmarpsah    varchar2(1) default ' ' not null,
  pmarphos    varchar2(3) default ' ' not null,
  pmarppad    varchar2(8) default ' ' not null,
  pmarbtyp    varchar2(3) default ' ' not null,
  pmaranpr    varchar2(1) default ' ' not null,
  pmarccbr    varchar2(3) default ' ' not null,
  pmarudf1    varchar2(3) default ' ' not null,
  pmaranty    varchar2(3) default ' ' not null,
  pmarodur    varchar2(5) default ' ' not null,
  pmarparc    varchar2(3) default ' ' not null,
  pmarcltr    varchar2(3) default ' ' not null,
  pmarhght    varchar2(6) default ' ' not null,
  pmarwght    varchar2(6) default ' ' not null,
  pmarcbmi    varchar2(5) default ' ' not null,
  pmarcoag    varchar2(3) default ' ' not null,
  pmarracg    varchar2(1) default ' ' not null,
  pmaraplt    varchar2(1) default ' ' not null,
  pmaritcr    varchar2(3) default ' ' not null,
  pmarintr    varchar2(3) default ' ' not null,
  pmarclam    varchar2(3) default ' ' not null,
  pmarsrcr    varchar2(3) default ' ' not null,
  pmarrefc    varchar2(10) default ' ' not null,
  pmarprac    varchar2(10) default ' ' not null,
  pmarpcnt    varchar2(2) default ' ' not null,
  pmarlsts    varchar2(3) default ' ' not null,
  pmarints    varchar2(3) default ' ' not null,
  pmarshtn    varchar2(3) default ' ' not null,
  pmarplos    varchar2(4) default ' ' not null,
  pmarnwhc    varchar2(3) default ' ' not null,
  pmarprdt    varchar2(8) default ' ' not null,
  pmarthlc    varchar2(3) default ' ' not null,
  pmarimpr    varchar2(1) default ' ' not null,
  pmarimpd    varchar2(80) default ' ' not null,
  pmarimpo    varchar2(1) default ' ' not null,
  pmarbngr    varchar2(1) default ' ' not null,
  pmarexfx    varchar2(1) default ' ' not null,
  pmarstat    varchar2(1) default ' ' not null,
  pmarmapr    varchar2(1) default ' ' not null,
  pmarthrq    varchar2(1) default ' ' not null,
  pmarrecc    varchar2(1) default ' ' not null,
  pmarrrcl    varchar2(3) default ' ' not null,
  pmarrrem    varchar2(3) default ' ' not null,
  pmartsrc    varchar2(5) default ' ' not null,
  pmarcdat    varchar2(8) default ' ' not null,
  pmarctim    varchar2(8) default ' ' not null,
  pmarcuid    varchar2(10) default ' ' not null,
  pmarudat    varchar2(8) default ' ' not null,
  pmarutim    varchar2(8) default ' ' not null,
  pmaruuid    varchar2(10) default ' ' not null,
  pmaraprr    varchar2(3) default ' ' not null,
  pmarspar    varchar2(97) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsarqa1 primary key( 
pmarreqn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsarqa2 on pmsarqaf
(
pmarurno,
pmarreqn
)
  tablespace pas_indx; 
create unique index pmsarqa3 on pmsarqaf
(
pmarihos,
pmarreqd,
pmarreqt,
pmarreqn
)
  tablespace pas_indx; 
create unique index pmsarqa4 on pmsarqaf
(
pmarihos,
pmarstat,
pmarreqd,
pmarreqt,
pmarreqn
)
  tablespace pas_indx; 
create unique index pmsarqa5 on pmsarqaf
(
pmarihos,
pmarunit,
pmarreqd,
pmarreqt,
pmarstat,
pmarreqn
)
  tablespace pas_indx; 
