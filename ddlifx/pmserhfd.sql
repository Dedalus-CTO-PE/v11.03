create table pmserhaf
(
  pmehhosp    char(3) default ' ' not null,
  pmehftid    char(24) default ' ' not null,
  pmehradv    char(30) default ' ' not null,
  pmehpnum    char(4) default ' ' not null,
  pmehptot    char(4) default ' ' not null,
  pmehdate    char(8) default ' ' not null,
  pmehname    char(40) default ' ' not null,
  pmehplid    char(8) default ' ' not null,
  pmehbnum    char(9) default ' ' not null,
  pmehbnam    char(30) default ' ' not null,
  pmehbbsb    char(6) default ' ' not null,
  pmehpref    char(30) default ' ' not null,
  pmehdamt    char(9) default ' ' not null,
  pmehstat    char(1) default ' ' not null,
  pmehspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index pmserha1 on pmserhaf
(
pmehhosp,
pmehftid,
pmehradv,
pmehpnum
);
create unique index pmserha2 on pmserhaf
(
pmehhosp,
pmehdate,
pmehftid,
pmehradv,
pmehpnum
);
create unique index pmserha3 on pmserhaf
(
pmehhosp,
pmehstat,
pmehdate,
pmehftid,
pmehradv,
pmehpnum
);
revoke all on pmserhaf from public ; 
grant select on pmserhaf to public ; 
