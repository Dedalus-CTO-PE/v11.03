create table watexbaf
(
wtxbnlv1    char(10),
wtxbnlv2    char(10),
wtxbnlep    decimal(6,0),
wtxbntl1    decimal(16,4),
wtxbnmn1    decimal(14,2),
wtxbnmx1    decimal(14,2),
wtxbnsv1    decimal(16,4),
wtxbntl2    decimal(16,4),
wtxbnmn2    decimal(14,2),
wtxbnmx2    decimal(14,2),
wtxbnsv2    decimal(16,4),
wtxbntl3    decimal(16,4),
wtxbnmn3    decimal(14,2),
wtxbnmx3    decimal(14,2),
wtxbnsv3    decimal(16,4),
wtxbnspa    char(39),
lf          char(1)
);
create unique index watexba1 on watexbaf
(
wtxbnlv1,
wtxbnlv2
);
revoke all on watexbaf from public ; 
grant select on watexbaf to public ; 
