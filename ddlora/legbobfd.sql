create table legbokbf
(
  dlobaout    varchar2(8) default ' ' not null,
  lobasrcr    varchar2(3) default ' ' not null,
  lobacomp    varchar2(3) default ' ' not null,
  lobaclas    varchar2(3) default ' ' not null,
  lobains     varchar2(3) default ' ' not null,
  lobaattn    varchar2(3) default ' ' not null,
  lobadoct    varchar2(6) default ' ' not null,
  lobacomm    varchar2(25) default ' ' not null,
  lotbbfun    varchar2(6) default ' ' not null,
  lotbbtbl    varchar2(8) default ' ' not null,
  dlotbbpv    varchar2(3) default ' ' not null,
  lotbbspa    varchar2(7) default ' ' not null,
  lobadate    varchar2(8) default ' ' not null,
  lobacat     varchar2(3) default ' ' not null,
  lobaprty    varchar2(3) default ' ' not null,
  lobarsch    varchar2(3) default ' ' not null,
  lobbport    varchar2(2) default ' ' not null,
  lobbbook    varchar2(1) default ' ' not null,
  lobbctyp    varchar2(6) default ' ' not null,
  lobousr1    varchar2(3) default ' ' not null,
  lobousr2    varchar2(3) default ' ' not null,
  lobousr3    varchar2(3) default ' ' not null,
  lobousr4    varchar2(3) default ' ' not null,
  lobaladm    varchar2(8) default ' ' not null,
  lotbbdep    varchar2(3) default ' ' not null,
  lotbbtra    varchar2(3) default ' ' not null,
  lotbblng    varchar2(3) default ' ' not null,
  lotbbtmf    varchar2(8) default ' ' not null,
  lotbbtmb    varchar2(8) default ' ' not null,
  lotbbgpf    varchar2(20) default ' ' not null,
  lotbbecr    varchar2(20) default ' ' not null,
  lotbbrfg    varchar2(8) default ' ' not null,
  lotbbgpc    varchar2(6) default ' ' not null,
  lotbbadc    varchar2(6) default ' ' not null,
  lotbbcit    varchar2(5) default ' ' not null,
  lotbbast    varchar2(5) default ' ' not null,
  lotbbdpt    varchar2(5) default ' ' not null,
  lotbbout    varchar2(3) default ' ' not null,
  lotbbsnd    varchar2(1) default ' ' not null,
  lotbbgpp    varchar2(2) default ' ' not null,
  lotbbdof    varchar2(3) default ' ' not null,
  lotbbope    varchar2(4) default ' ' not null,
  lobousr5    varchar2(3) default ' ' not null,
  lobousr6    varchar2(3) default ' ' not null,
  lobousr7    varchar2(3) default ' ' not null,
  lobousr8    varchar2(3) default ' ' not null,
  lotbbran    varchar2(6) default ' ' not null,
  lotbbspr    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legbokb1 primary key( 
dlobaout)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legbokb2 on legbokbf
(
lobadate,
dlobaout
)
  tablespace pas_indx; 
