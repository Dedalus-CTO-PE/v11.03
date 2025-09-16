create table alldepaf
(
  aldedept    char(3) default ' ' not null,
  alderefe    char(1) default ' ' not null,
  aldesecu    char(1) default ' ' not null,
  aldevacs    char(1) default ' ' not null,
  aldebill    char(1) default ' ' not null,
  aldeprac    char(6) default ' ' not null,
  aldeur1     char(25) default ' ' not null,
  aldeur2     char(25) default ' ' not null,
  aldeud1     char(8) default ' ' not null,
  aldeud2     char(8) default ' ' not null,
  aldeuy1     char(1) default ' ' not null,
  aldeuy2     char(1) default ' ' not null,
  aldeuc1     char(3) default ' ' not null,
  aldeuc2     char(3) default ' ' not null,
  aldecdat    char(8) default ' ' not null,
  aldectim    char(8) default ' ' not null,
  aldecuid    char(10) default ' ' not null,
  aldeudat    char(8) default ' ' not null,
  aldeutim    char(8) default ' ' not null,
  aldeuuid    char(10) default ' ' not null,
  aldehosp    char(3) default ' ' not null,
  aldeactv    char(1) default ' ' not null,
  aldesreq    char(1) default ' ' not null,
  aldecsep    char(6) default ' ' not null,
  aldeprgs    char(3) default ' ' not null,
  aldepenc    char(1) default ' ' not null,
  aldevecc    char(6) default ' ' not null,
  aldeuerf    char(1) default ' ' not null,
  aldeurad    char(1) default ' ' not null,
  aldeuass    char(1) default ' ' not null,
  aldeurap    char(1) default ' ' not null,
  aldedlas    char(1) default ' ' not null,
  aldedcli    char(1) default ' ' not null,
  aldedraa    char(1) default ' ' not null,
  aldedlet    char(1) default ' ' not null,
  aldeueme    char(1) default ' ' not null,
  aldeuein    char(1) default ' ' not null,
  aldeuesu    char(1) default ' ' not null,
  aldeuahp    char(1) default ' ' not null,
  aldesite    char(6) default ' ' not null,
  aldectyp    char(6) default ' ' not null,
  aldeaone    char(1) default ' ' not null,
  aldeutrs    char(1) default ' ' not null,
  aldeuprt    char(1) default ' ' not null,
  aldedacp    char(1) default ' ' not null,
  aldespar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index alldepa1 on alldepaf
(
aldedept
);
create unique index alldepa2 on alldepaf
(
aldehosp,
aldedept
);
revoke all on alldepaf from public ; 
grant select on alldepaf to public ; 
