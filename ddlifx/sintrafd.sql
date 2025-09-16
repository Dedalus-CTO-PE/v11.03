create table sintraaf
(
sitanum     char(8),
sitairf     char(20),
sitaref     char(40),
sitadat     char(8),
sitapl      decimal(14,2),
sitaacc     char(14),
sitaud1     char(8),
sitaud2     char(8),
sitaur1     char(15),
sitaur2     char(15),
sitauy1     char(1),
sitauy2     char(1),
sitaspa     char(30),
lf          char(1)
);
create unique index sintraa1 on sintraaf
(
sitanum
);
revoke all on sintraaf from public ; 
grant select on sintraaf to public ; 
