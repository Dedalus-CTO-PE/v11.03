create table sinaudca
(
sicaaudd    char(8),
sicaaudt    char(8),
sicaaudp    char(2),
sicaaudr    char(1),
sicaauds    decimal(1,0),
sicaaudo    char(4),
sicacode    char(5),
sicadesc    char(40),
sicatele    char(12),
sicacont    char(35),
sicagl      char(14),
sicaimpd    char(7),
sicadad1    char(30),
sicadad2    char(30),
sicadad3    char(30),
sicaloc     decimal(1,0),
sicames     char(60),
sicaur1     char(15),
sicaur2     char(15),
sicaud1     char(8),
sicaud2     char(8),
sicauc1     char(3),
sicauc2     char(3),
sicauy1     char(1),
sicauy2     char(1),
sicarid     char(8),
sicapacc    char(12),
sicaspa     char(14),
lf          char(1)
);
create index sinaudca on sinaudca
(
sicaaudd,
sicaaudt,
sicaaudp,
sicaaudr
);
revoke all on sinaudca from public ; 
grant select on sinaudca to public ; 
create table sinccaaf
(
sicacode    char(5),
sicadesc    char(40),
sicatele    char(12),
sicacont    char(35),
sicagl      char(14),
sicaimpd    char(7),
sicadad1    char(30),
sicadad2    char(30),
sicadad3    char(30),
sicaloc     decimal(1,0),
sicames     char(60),
sicaur1     char(15),
sicaur2     char(15),
sicaud1     char(8),
sicaud2     char(8),
sicauc1     char(3),
sicauc2     char(3),
sicauy1     char(1),
sicauy2     char(1),
sicarid     char(8),
sicapacc    char(12),
sicaspa     char(14),
lf          char(1)
);
create unique index sinccaa1 on sinccaaf
(
sicacode
);
create unique index sinccaa2 on sinccaaf
(
sicadesc,
sicacode
);
revoke all on sinccaaf from public ; 
grant select on sinccaaf to public ; 
