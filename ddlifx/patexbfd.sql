create table patexbnn
(
dptxbadm    char(8),
ptxbtdat    char(8),
ptxbtype    char(1),
ptxbnday    decimal(4,0),
ptxbtwrd    char(3),
ptxbtbed    char(3),
ptxbttyp    char(3),
ptxbtcre    char(3),
ptxbtdpt    char(3),
ptxbtadc    char(6),
ptxbtadt    char(3),
ptxbaccm    decimal(14,2),
ptxbaccp    decimal(14,2),
ptxbaccr    decimal(14,2),
ptxbdisc    decimal(14,2),
ptxballw    decimal(14,2),
ptxbthet    decimal(14,2),
ptxbthtp    decimal(14,2),
ptxbthtr    decimal(14,2),
ptxbmisc    decimal(14,2),
ptxbmisp    decimal(14,2),
ptxbmisr    decimal(14,2),
ptxblspt    decimal(14,2),
ptxblsrb    decimal(14,2),
ptxbspar    char(51),
lf          char(1)
);
create unique index patextb1 on patexbnn
(
dptxbadm,
ptxbtdat,
ptxbtype
);
revoke all on patexbnn from public ; 
grant select on patexbnn to public ; 
