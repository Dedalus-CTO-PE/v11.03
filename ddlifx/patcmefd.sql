create table patcmeaf
(
ptceadmn    char(8),
ptceurno    char(8),
ptceward    char(3),
ptcewbed    char(3),
ptcepnam    char(20),
ptcepsex    char(1),
ptcepage    decimal(3,0),
ptceadoc    char(10),
ptceambs    char(9),
ptceidsc    char(30),
ptcehfnd    char(6),
ptceadat    char(8),
ptceodat    char(8),
ptcecpay    char(1),
ptcepcat    char(3),
ptcebtyp    char(3),
ptceclos    decimal(4,0),
ptcetlos    decimal(4,0),
ptcelday    decimal(4,0),
ptceiday    decimal(4,0),
ptceoday    decimal(4,0),
ptcedpin    decimal(4,0),
ptcedtou    decimal(4,0),
ptcedtor    decimal(4,0),
ptceeday    decimal(4,0),
ptcerate    decimal(14,2),
ptcedchr    decimal(4,0),
ptcelsum    decimal(14,2),
ptceachr    decimal(14,2),
ptcedrgd    char(8),
ptcespar    char(20),
lf          char(1)
);
create unique index patcmea1 on patcmeaf
(
ptceadmn
);
revoke all on patcmeaf from public ; 
grant select on patcmeaf to public ; 
