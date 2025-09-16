create table allemdaf
(
  alemvisn    char(8) default ' ' not null,
  alemenct    char(8) default ' ' not null,
  alemmcnt    char(8) default ' ' not null,
  alemcode    char(20) default ' ' not null,
  alemqant    char(3) default ' ' not null,
  alemunit    char(3) default ' ' not null,
  alemdura    char(4) default ' ' not null,
  alemdtyp    char(3) default ' ' not null,
  alemmedr    char(3) default ' ' not null,
  alemmedt    char(3) default ' ' not null,
  alemtext    char(50) default ' ' not null,
  alemcdat    char(8) default ' ' not null,
  alemctim    char(8) default ' ' not null,
  alemcuid    char(10) default ' ' not null,
  alemudat    char(8) default ' ' not null,
  alemutim    char(8) default ' ' not null,
  alemuuid    char(10) default ' ' not null,
  alemspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allemda1 on allemdaf
(
alemvisn,
alemenct,
alemmcnt
);
revoke all on allemdaf from public ; 
grant select on allemdaf to public ; 
