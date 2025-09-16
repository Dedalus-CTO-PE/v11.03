create table sinvhaaf
(
sivhdat     char(6),
sivhfno     char(3),
sivhord     char(20),
sivhlin     char(3),
sivhqty     decimal(7,0),
sivhsun     char(15),
sivhcos     decimal(13,4),
sivhpat     char(20),
sivhsta     char(1),
sivhcor     char(7),
sivhcat     char(7),
sivhtyp     char(1),
sivhven     char(20),
sivhtype    decimal(2,0),
sivhspa     char(6),
lf          char(1)
);
create unique index sinvhaa1 on sinvhaaf
(
sivhdat,
sivhfno,
sivhlin
);
create unique index sinvhaa2 on sinvhaaf
(
sivhsta,
sivhord,
sivhdat,
sivhfno,
sivhlin
);
create unique index sinvhaa3 on sinvhaaf
(
sivhord,
sivhcor,
sivhcat,
sivhdat,
sivhfno,
sivhlin
);
revoke all on sinvhaaf from public ; 
grant select on sinvhaaf to public ; 
