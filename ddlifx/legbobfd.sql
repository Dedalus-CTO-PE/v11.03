create table legbokbf
(
  dlobaout    char(8) default ' ' not null,
  lobasrcr    char(3) default ' ' not null,
  lobacomp    char(3) default ' ' not null,
  lobaclas    char(3) default ' ' not null,
  lobains     char(3) default ' ' not null,
  lobaattn    char(3) default ' ' not null,
  lobadoct    char(6) default ' ' not null,
  lobacomm    char(25) default ' ' not null,
  lotbbfun    char(6) default ' ' not null,
  lotbbtbl    char(8) default ' ' not null,
  dlotbbpv    char(3) default ' ' not null,
  lotbbspa    char(7) default ' ' not null,
  lobadate    char(8) default ' ' not null,
  lobacat     char(3) default ' ' not null,
  lobaprty    char(3) default ' ' not null,
  lobarsch    char(3) default ' ' not null,
  lobbport    char(2) default ' ' not null,
  lobbbook    char(1) default ' ' not null,
  lobbctyp    char(6) default ' ' not null,
  lobousr1    char(3) default ' ' not null,
  lobousr2    char(3) default ' ' not null,
  lobousr3    char(3) default ' ' not null,
  lobousr4    char(3) default ' ' not null,
  lobaladm    char(8) default ' ' not null,
  lotbbdep    char(3) default ' ' not null,
  lotbbtra    char(3) default ' ' not null,
  lotbblng    char(3) default ' ' not null,
  lotbbtmf    char(8) default ' ' not null,
  lotbbtmb    char(8) default ' ' not null,
  lotbbgpf    char(20) default ' ' not null,
  lotbbecr    char(20) default ' ' not null,
  lotbbrfg    char(8) default ' ' not null,
  lotbbgpc    char(6) default ' ' not null,
  lotbbadc    char(6) default ' ' not null,
  lotbbcit    char(5) default ' ' not null,
  lotbbast    char(5) default ' ' not null,
  lotbbdpt    char(5) default ' ' not null,
  lotbbout    char(3) default ' ' not null,
  lotbbsnd    char(1) default ' ' not null,
  lotbbgpp    char(2) default ' ' not null,
  lotbbdof    char(3) default ' ' not null,
  lotbbope    char(4) default ' ' not null,
  lobousr5    char(3) default ' ' not null,
  lobousr6    char(3) default ' ' not null,
  lobousr7    char(3) default ' ' not null,
  lobousr8    char(3) default ' ' not null,
  lotbbran    char(6) default ' ' not null,
  lotbbspr    char(30) default ' ' not null,
  lf          char(1)
);
create unique index legbokb1 on legbokbf
(
dlobaout
);
create unique index legbokb2 on legbokbf
(
lobadate,
dlobaout
);
revoke all on legbokbf from public ; 
grant select on legbokbf to public ; 
