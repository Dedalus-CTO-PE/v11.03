create table obscnaaf
(
obcavis     char(8),
obcacid     char(4),
obcadte     char(8),
obcatme     char(8),
obcauid     char(10),
obcaocg     char(3),
obcatyp     char(3),
obcamdl     char(1),
obcahlv     char(3),
obcaslv     char(2),
obcamin     char(6),
obcapt1     char(60),
obcap1d     char(1),
obcapt2     char(60),
obcap2d     char(1),
obcapt3     char(60),
obcap3d     char(1),
obcapt4     char(60),
obcap4d     char(1),
obcauc1     char(3),
obcauc2     char(3),
obcauc3     char(3),
obcauc4     char(3),
obcauc5     char(3),
obcauc6     char(3),
obcauc7     char(3),
obcauc8     char(3),
obcaud1     char(1),
obcaud2     char(1),
obcaud3     char(1),
obcaud4     char(1),
obcadd1     char(8),
obcadd2     char(8),
obcadlu     char(8),
obcatlu     char(8),
obcalid     char(10),
obcaat1     char(8),
obcaat2     char(8),
obcatx1     char(127),
obcaspa     char(50),
lf          char(1)
);
create unique index obscnaa1 on obscnaaf
(
obcavis,
obcacid
);
create unique index obscnaa2 on obscnaaf
(
obcavis,
obcadte,
obcatme,
obcacid
);
revoke all on obscnaaf from public ; 
grant select on obscnaaf to public ; 
